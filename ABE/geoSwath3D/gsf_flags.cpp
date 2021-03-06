#include "gsf_flags.hpp"

/***************************************************************************\
*                                                                           *
*   Module Name:        gsf_to_pfm_flags                                    *
*                                                                           *
*   Programmer(s):      Jan C. Depner                                       *
*                                                                           *
*   Date Written:       March 2000                                          *
*                                                                           *
*   Purpose:            Converts GSF flags to PFM flags.                    *
*                                                                           *
*   Arguments:          pfm_flags                                           *
*                       gsf_flags                                           *
*                                                                           *
*   Return Value:       None                                                *
*                                                                           *
\***************************************************************************/

void gsf_to_pfm_flags (NV_U_INT32 *pfm_flags, NV_U_BYTE gsf_flags)
{
    *pfm_flags = 0;


    if (check_flag (gsf_flags, HMPS_IGNORE_MANUALLY_EDITED))
        *pfm_flags |= PFM_MANUALLY_INVAL;

    if (check_flag (gsf_flags, HMPS_IGNORE_FILTER_EDITED) ||
        check_flag (gsf_flags, HMPS_IGNORE_NULL_BEAM))
      *pfm_flags |= PFM_FILTER_INVAL;

    if (check_flag (gsf_flags, HMPS_SELECTED_LEAST))
        *pfm_flags |= PFM_SELECTED_SOUNDING;

    if (check_flag (gsf_flags, HMPS_SELECTED_CONTACT))
        *pfm_flags |= PFM_SELECTED_FEATURE;

    if (check_flag (gsf_flags, HMPS_SELECTED_SPARE_1))
        *pfm_flags |= PFM_SUSPECT;
}



/***************************************************************************\
*                                                                           *
*   Module Name:        pfm_to_gsf_flags                                    *
*                                                                           *
*   Programmer(s):      Jan C. Depner                                       *
*                                                                           *
*   Date Written:       March 2000                                          *
*                                                                           *
*   Purpose:            Converts PFM flags to GSF flags.                    *
*                                                                           *
*   Arguments:          pfm_flags                                           *
*                       gsf_flags                                           *
*                                                                           *
*   Return Value:       None                                                *
*                                                                           *
\***************************************************************************/

void pfm_to_gsf_flags (NV_U_INT32 pfm_flags, NV_U_BYTE *gsf_flags)
{
    *gsf_flags = 0;


    if ((pfm_flags & PFM_MANUALLY_INVAL) || (pfm_flags & PFM_FILTER_INVAL))
    {
        if (pfm_flags & PFM_MANUALLY_INVAL)
        {
            set_flag (gsf_flags, HMPS_IGNORE_MANUALLY_EDITED);
        }
        else
        {
            set_flag (gsf_flags, HMPS_IGNORE_FILTER_EDITED);
        }
    }
    else
    {
        if (pfm_flags & PFM_SELECTED_SOUNDING)
            set_flag (gsf_flags, HMPS_SELECTED_LEAST);

        if (pfm_flags & PFM_SUSPECT)
            set_flag (gsf_flags, HMPS_SELECTED_SPARE_1);

        if (pfm_flags & PFM_SELECTED_FEATURE)
            set_flag (gsf_flags, HMPS_SELECTED_CONTACT);
    }
}
