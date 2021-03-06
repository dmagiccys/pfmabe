#include "pfmEdit3D.hpp"

void setFlags (MISC *misc, OPTIONS *options)
{
  //  Turn off highlighted points.

  if (misc->highlight_count)
    {
      free (misc->highlight);
      misc->highlight = NULL;
      misc->highlight_count = 0;
    }


  NV_U_INT32 check = 0;

  switch (options->flag_index)
    {
    case 1:
      check = PFM_SUSPECT;
      break;

    case 2:
      check = PFM_SELECTED_SOUNDING;
      break;

    case 3:
      check = PFM_SELECTED_FEATURE;
      break;

    case 4:
      check = PFM_DESIGNATED_SOUNDING;
      break;

    case 5:
      check = PFM_INVAL;
      break;

    case PRE_USER + 0:
      check = PFM_USER_01;
      break;

    case PRE_USER + 1:
      check = PFM_USER_02;
      break;

    case PRE_USER + 2:
      check = PFM_USER_03;
      break;

    case PRE_USER + 3:
      check = PFM_USER_04;
      break;

    case PRE_USER + 4:
      check = PFM_USER_05;
      break;
    }

  if (options->flag_index)
    {
      for (NV_INT32 i = 0 ; i < misc->abe_share->point_cloud_count ; i++)
        {
          //  If we are displaying and editing only a single line, only get those points that are in that line.

          if (!misc->num_lines || check_line (misc, misc->data[i].line))
            {
              if (!check_bounds (options, misc, i, NVTrue, misc->slice))
                {
                  if (misc->data[i].val & check)
                    {
                      misc->highlight = (NV_INT32 *) realloc (misc->highlight, (misc->highlight_count + 1) *
                                                              sizeof (NV_INT32));
                      if (misc->highlight == NULL)
                        {
                          perror ("Allocating misc->highlight in pfmEdit3D.cpp");
                          exit (-1);
                        }

                      misc->highlight[misc->highlight_count] = i;
                      misc->highlight_count++;
                    }
                }
            }
        }
    }
}
