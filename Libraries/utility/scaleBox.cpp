
/*********************************************************************************************

    This is public domain software that was developed by the U.S. Naval Oceanographic Office.

    This is a work of the US Government. In accordance with 17 USC 105, copyright protection
    is not available for any work of the US Government.

    Neither the United States Government nor any employees of the United States Government,
    makes any warranty, express or implied, without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, or assumes any liability or
    responsibility for the accuracy, completeness, or usefulness of any information,
    apparatus, product, or process disclosed, or represents that its use would not infringe
    privately-owned rights. Reference herein to any specific commercial products, process,
    or service by trade name, trademark, manufacturer, or otherwise, does not necessarily
    constitute or imply its endorsement, recommendation, or favoring by the United States
    Government. The views and opinions of authors expressed herein do not necessarily state
    or reflect those of the United States Government, and shall not be used for advertising
    or product endorsement purposes.

*********************************************************************************************/


/****************************************  IMPORTANT NOTE  **********************************

    Comments in this file that start with / * ! or / / ! are being used by Doxygen to
    document the software.  Dashes in these comment blocks are used to create bullet lists.
    The lack of blank lines after a block of dash preceeded comments means that the next
    block of dash preceeded comments is a new, indented bullet list.  I've tried to keep the
    Doxygen formatting to a minimum but there are some other items (like <br> and <pre>)
    that need to be left alone.  If you see a comment that starts with / * ! or / / ! and
    there is something that looks a bit weird it is probably due to some arcane Doxygen
    syntax.  Be very careful modifying blocks of Doxygen comments.

*****************************************  IMPORTANT NOTE  **********************************/



#include "scaleBox.hpp"

//  Believe it or not, these are 13 by 13 pixel unlock and lock icons in PNG format.

static const NV_U_CHAR unlock[] = {
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0xd,0x0,0x0,0x0,0xd,0x8,0x6,0x0,0x0,0x0,0x72,0xeb,0xe4,0x7c,
  0x0,0x0,0x0,0x6,0x62,0x4b,0x47,0x44,0x0,0xff,0x0,0xff,0x0,0xff,0xa0,0xbd,
  0xa7,0x93,0x0,0x0,0x0,0x9,0x70,0x48,0x59,0x73,0x0,0x0,0xb,0x13,0x0,0x0,
  0xb,0x13,0x1,0x0,0x9a,0x9c,0x18,0x0,0x0,0x0,0x7,0x74,0x49,0x4d,0x45,0x7,
  0xda,0xc,0x15,0x13,0x8,0x37,0xb3,0x42,0xed,0x6b,0x0,0x0,0x2,0x1f,0x49,0x44,
  0x41,0x54,0x28,0xcf,0x5d,0x8e,0x3b,0x68,0x53,0x71,0x18,0xc5,0x7f,0xf7,0x91,0x36,
  0xa6,0x91,0x26,0x6d,0x68,0x21,0x41,0xab,0x15,0xac,0x41,0x7,0x2b,0x2e,0x4e,0x56,
  0x29,0x28,0xe2,0x52,0x87,0x2e,0x5,0x9d,0xea,0xe2,0x28,0x74,0xb1,0x93,0x50,0x37,
  0xe7,0x82,0xdd,0x7d,0xe0,0x5a,0xe9,0xe0,0x20,0x28,0x28,0xd4,0x42,0x8b,0xa5,0xd4,
  0x5a,0x2a,0x4d,0x5f,0xc1,0xe6,0x71,0x93,0x9b,0x7b,0x6f,0x1e,0xf7,0xde,0xff,0xe7,
  0x90,0x88,0xe2,0x81,0x1f,0xe7,0x1b,0xce,0xe1,0x7c,0x1a,0x1d,0x4d,0x4f,0xcf,0x19,
  0x7d,0x7d,0x89,0xe1,0x91,0x91,0xa1,0x99,0x74,0x3a,0x75,0x2f,0x16,0xeb,0x8e,0xbb,
  0x6e,0xc3,0x39,0x38,0x38,0x5e,0xdc,0xde,0xde,0x7f,0x6e,0x59,0xd5,0x8d,0x85,0x85,
  0x27,0x21,0x80,0xf9,0xa7,0xa4,0xeb,0x5a,0x36,0x9b,0x3d,0xf3,0x6c,0x6c,0x6c,0xf4,
  0x4e,0x18,0x6,0xca,0x75,0x5d,0x67,0x60,0x20,0xde,0x33,0x3c,0x3c,0x38,0x65,0x18,
  0x5a,0x7a,0x79,0x79,0x63,0x6,0x58,0x5,0x30,0x0,0x26,0x26,0x1e,0xf7,0x64,0xb3,
  0xc3,0x8f,0x6e,0xdc,0xbc,0x3a,0x59,0x2c,0x14,0x59,0x5a,0xfa,0xf2,0x72,0x6d,0x6d,
  0x7b,0x7e,0x6b,0x2b,0x77,0x68,0x18,0x72,0x29,0x9b,0x3d,0x7b,0x3a,0x9f,0x2f,0x55,
  0x92,0xc9,0xf3,0xcb,0x9b,0x9b,0x9f,0x7d,0x13,0xa0,0x56,0x73,0x12,0xca,0xe8,0x7e,
  0xb8,0xb8,0xf4,0xb5,0x51,0xaf,0x7b,0xee,0xd6,0xe6,0xce,0x5c,0xef,0xc9,0x9e,0x1d,
  0xcb,0xaa,0xbc,0x2b,0x97,0xcb,0x17,0x26,0x27,0x93,0xb7,0x32,0x99,0xd4,0xc5,0x4f,
  0x1f,0x9d,0x24,0xe0,0x9a,0x0,0x55,0x4f,0xcf,0x1f,0xe5,0x4b,0xa9,0x54,0x7f,0x82,
  0x6f,0xeb,0xbb,0xf8,0xf5,0x6,0x6f,0x5e,0xcd,0x1,0x94,0xef,0x3f,0x98,0x2d,0x54,
  0xab,0x55,0x5a,0x7e,0xcb,0x28,0xdb,0x9e,0x6,0xa0,0xad,0xcc,0x66,0x22,0x5d,0x11,
  0x3d,0x8,0x75,0x53,0x9a,0xa1,0x4e,0x97,0x21,0x44,0xc,0x21,0x10,0x4d,0x8f,0xea,
  0xc1,0xc0,0xeb,0xbd,0xeb,0x2f,0x46,0xc7,0xc6,0xef,0x16,0xf6,0xf6,0x3f,0xa8,0x1f,
  0x6f,0x67,0xaf,0x65,0x8e,0x57,0x4c,0xcf,0x88,0x65,0x4e,0x9c,0x4a,0xce,0xf,0x5d,
  0xee,0x17,0xb4,0x40,0x21,0x24,0x3,0x85,0x2e,0x68,0x15,0x43,0x97,0xf8,0x94,0x55,
  0x1a,0x31,0xa2,0xef,0x35,0x19,0x74,0xaf,0x38,0x71,0x79,0x6a,0x1f,0x76,0x4d,0x9b,
  0x25,0x8f,0x44,0x2c,0x1a,0xdc,0x8e,0x9f,0x73,0xc0,0xaf,0xf3,0xbf,0x7a,0x87,0x0,
  0x7e,0x41,0xb5,0x95,0x58,0x5d,0xad,0x8e,0x17,0xca,0x7e,0xc2,0xcc,0xe5,0x5b,0xc4,
  0xd2,0x36,0x5a,0xc1,0x86,0x66,0xeb,0x9f,0xb8,0x6,0xd2,0x36,0x6a,0x3e,0xec,0x3a,
  0x14,0x7f,0xea,0xe4,0x8e,0x22,0x98,0x45,0x4b,0xe1,0x94,0x2,0xc8,0xfb,0xd0,0xf4,
  0xdb,0x79,0xe9,0x10,0xa,0xd4,0x2,0x28,0x34,0xc1,0xf,0x70,0xec,0x28,0xc5,0x8a,
  0xc2,0x94,0x50,0x21,0xd,0x1,0xbb,0x53,0xf2,0x5,0x7c,0xd5,0x41,0xc0,0xb,0xa1,
  0xa9,0x40,0x29,0xc4,0x57,0x88,0x80,0x29,0xe8,0x8,0x7a,0x7b,0x21,0x8,0xa1,0xa5,
  0xda,0x34,0xd5,0xdf,0xbb,0x25,0x10,0x28,0xc4,0x7,0x9,0xc1,0xb4,0x6c,0xe5,0xad,
  0x7f,0x97,0x1d,0xbb,0xac,0x65,0xb4,0xc0,0x54,0x84,0x2,0xa,0x50,0xd2,0x7e,0x2f,
  0x14,0x50,0x82,0x84,0xe8,0x39,0x3b,0x72,0x68,0x35,0x74,0xef,0x37,0xea,0x70,0x24,
  0xf,0x5c,0xd5,0xdb,0x6a,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,
  0x82
};

static const NV_U_CHAR lock[] = {
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0xd,0x0,0x0,0x0,0xd,0x8,0x6,0x0,0x0,0x0,0x72,0xeb,0xe4,0x7c,
  0x0,0x0,0x0,0x6,0x62,0x4b,0x47,0x44,0x0,0xff,0x0,0xff,0x0,0xff,0xa0,0xbd,
  0xa7,0x93,0x0,0x0,0x0,0x9,0x70,0x48,0x59,0x73,0x0,0x0,0xb,0x13,0x0,0x0,
  0xb,0x13,0x1,0x0,0x9a,0x9c,0x18,0x0,0x0,0x0,0x7,0x74,0x49,0x4d,0x45,0x7,
  0xda,0xc,0x15,0x12,0x3b,0x26,0x2c,0x5b,0xc2,0x9e,0x0,0x0,0x2,0x2d,0x49,0x44,
  0x41,0x54,0x28,0xcf,0x4d,0x8e,0xcf,0x4b,0x93,0x71,0x1c,0xc7,0x5f,0xcf,0x8f,0xe1,
  0x9a,0xb3,0xe6,0x30,0xad,0xad,0x5a,0xe,0x6b,0xcc,0x95,0xd4,0xad,0x4e,0x79,0x8,
  0xa1,0x6e,0x76,0x8b,0x20,0x4f,0xfb,0xb,0x2,0xf,0x25,0x14,0x84,0xdd,0x3a,0x7,
  0xa,0x11,0x4,0xd1,0xa1,0x63,0xe0,0x49,0x90,0x8,0x31,0x33,0x5c,0x86,0x99,0xd8,
  0xc4,0xa5,0x6b,0xea,0xe6,0xe6,0xf3,0xec,0xd9,0xcf,0xe7,0x79,0xbe,0xdf,0xe,0x5b,
  0xe5,0x1b,0x5e,0x7c,0xde,0x87,0xf7,0x9b,0xcf,0x5b,0xa1,0xad,0x64,0x72,0x52,0xb,
  0x6,0x3,0xd1,0x58,0x2c,0x32,0x1e,0xa,0xf5,0xdc,0xf1,0xf9,0x3a,0xfc,0x95,0x4a,
  0xdd,0xda,0xd9,0xd9,0x7f,0xbf,0xb1,0xb1,0xfd,0xbc,0x54,0x32,0x56,0xa7,0xa7,0x1f,
  0xb9,0x0,0xfa,0xdf,0x92,0xaa,0x2a,0xf1,0x78,0xfc,0xfc,0xb3,0xe1,0xe1,0xab,0xb7,
  0x5d,0xd7,0x11,0x95,0x4a,0xc5,0xea,0xed,0xf5,0x77,0x46,0xa3,0x7d,0xf7,0x34,0x4d,
  0x9,0x2d,0x2e,0xae,0x8e,0x3,0xcb,0x0,0x1a,0xc0,0xe8,0xe8,0x83,0xce,0xc1,0xc1,
  0x68,0x72,0x64,0xe4,0xda,0xdd,0xfd,0xfd,0x3c,0x33,0x33,0xf3,0x6f,0x52,0xa9,0x8d,
  0x17,0xeb,0xeb,0x99,0xac,0xa6,0xc9,0x4b,0xf1,0x78,0xff,0xb9,0x5c,0xee,0xe0,0xb0,
  0xbb,0xfb,0xe2,0xe2,0xda,0xda,0xbc,0xad,0x2,0x94,0xcb,0x56,0x30,0x12,0x39,0x35,
  0xe4,0xf3,0xe9,0xfe,0xd9,0xd9,0xcf,0xa9,0x85,0x4f,0xdf,0x9f,0xec,0xed,0x19,0xaf,
  0x57,0x56,0xd2,0x4f,0xe7,0xe6,0xbe,0xcc,0xd7,0x6a,0x96,0x2f,0x1c,0xee,0x49,0x58,
  0x65,0xab,0xfb,0xdf,0x3c,0xab,0xee,0xf1,0x1c,0x9a,0x75,0xdd,0x34,0x1b,0xb5,0xd4,
  0xea,0xee,0x42,0xd3,0x96,0xdb,0x53,0x53,0xf,0x1,0x8a,0xf7,0xc7,0x26,0xf2,0x86,
  0x61,0xd0,0xb4,0x9b,0x5a,0xd1,0xac,0x2a,0x0,0xfa,0xd2,0x44,0xd8,0xf3,0x2e,0xbd,
  0x39,0xe0,0x77,0xe3,0xc7,0x65,0xb9,0x2b,0xdb,0xdf,0xf1,0x33,0x3f,0x36,0xf4,0x31,
  0x31,0x79,0x3d,0x8a,0x57,0x75,0xc4,0xdb,0x5f,0x99,0x40,0xdd,0xc8,0xa2,0x99,0xdb,
  0x5d,0xc9,0xa1,0xaf,0x67,0x5e,0xde,0x3a,0xbd,0xab,0x7c,0x78,0x7c,0xe1,0xbc,0xde,
  0xd7,0xf7,0x2a,0x90,0x18,0x48,0x1c,0xf3,0x2a,0x1d,0x4e,0xad,0xb0,0x15,0xf4,0xd7,
  0x2b,0x12,0x5,0x4d,0x95,0x4e,0xbe,0xe4,0x89,0x69,0xde,0xe0,0x49,0x69,0x57,0xe,
  0xad,0xb5,0xf4,0x92,0x95,0x35,0x92,0xfa,0x41,0x95,0xc0,0xd9,0x40,0xf5,0x46,0xec,
  0x4a,0x1a,0xec,0x1a,0xc0,0x65,0x8e,0xe8,0x44,0x4,0x60,0xf,0x8c,0x66,0x60,0x79,
  0xd9,0xb8,0x99,0x2f,0xda,0x1,0x3d,0x93,0x6b,0xe2,0xb,0x99,0x28,0x79,0x13,0x1a,
  0xcd,0x23,0x71,0x5,0x64,0xeb,0x50,0xb6,0x61,0xcb,0xa2,0xb0,0xa9,0x92,0xf9,0xed,
  0x41,0x2f,0x94,0x4,0xd6,0x81,0x3,0x39,0x1b,0x1a,0x76,0x2b,0x2f,0xdb,0xb8,0x12,
  0xca,0xe,0xe4,0x1b,0x60,0x3b,0x58,0xa6,0x97,0xc2,0xa1,0x40,0x97,0xae,0x40,0xd6,
  0x25,0x98,0xed,0x92,0x2d,0xc1,0x16,0x6d,0x24,0x54,0x5d,0x68,0x8,0x10,0x2,0x69,
  0xb,0xa4,0x4,0x5d,0xa2,0x22,0x51,0x5b,0x1f,0x1c,0x17,0x9a,0xa2,0x45,0x43,0xfc,
  0xf7,0x4d,0x9,0x8e,0x40,0xda,0x20,0x5d,0xd0,0x4b,0xa6,0xa8,0x7e,0xfb,0x21,0xd3,
  0x66,0x51,0x9,0x2b,0x8e,0x2e,0x70,0x25,0x8,0x40,0xc8,0xd6,0x3c,0x57,0x82,0x90,
  0x48,0x17,0x35,0x63,0x7a,0xb2,0xa5,0xba,0x5a,0xfd,0x3,0x71,0xad,0x2b,0xd1,0x3b,
  0xe6,0x1f,0xd8,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};

scaleBox::scaleBox (QWidget *parent, QColor clr, NV_FLOAT32 val):
  QWidget (parent)
{
  color = clr;
  value = val;


  //setSizePolicy (QSizePolicy::Fixed);


  lockPixmap.loadFromData (lock, 672);
  unlockPixmap.loadFromData (unlock, 658);
}



scaleBox::~scaleBox ()
{
}



void 
scaleBox::setContents (QColor clr, NV_FLOAT32 val)
{
  setContents (clr, val, NVFalse);
}



void 
scaleBox::setContents (QColor clr, NV_FLOAT32 val, NV_INT32 lckd)
{
  color = clr;
  value = val;
  locked = lckd;


  update ();
}



void scaleBox::paintEvent (QPaintEvent *)
{
  QPainter painter (this);

  NV_INT32 w = width ();
  NV_INT32 h = height ();


  QBrush brush;
  brush.setStyle (Qt::SolidPattern);

  brush.setColor (color);

  painter.setBrush (brush);

  painter.fillRect (0, 0, w, h, brush);

  painter.setPen (Qt::black);
  painter.drawRect (0, 0, w, h);


  QString string;
  string.sprintf ("%0.2f", value);

  QFont font ("Charter", 8, QFont::Bold);
  font = QFont (font, painter.device ());
  painter.setFont(font);


  //  Don't print the initial (stupid) values.

  if (value < 99999.0)
    {
      //  Draw the lock first in case the number is larger.

      if (locked)
        {
          if (locked < 0)
            {
              painter.drawPixmap (w - 14, 2, unlockPixmap);
            }
          else
            {
              painter.drawPixmap (w - 14, 2, lockPixmap);
            }
        }

      NV_INT32 hue, sat, val;

      color.getHsv (&hue, &sat, &val);

      if (hue > 200 && hue < 300)
        {
          painter.setPen (Qt::white);
        }
      else
        {
          painter.setPen (Qt::black);
        }

      painter.drawText (4, 12, string); 
    }
}



//!  Double clicked a mouse button.  Emit a signal.

void
scaleBox::mouseDoubleClickEvent (QMouseEvent *e)
{
  emit mouseDoubleClickSignal (e);
}



//!  Pressed a mouse button.  Emit a signal.

void
scaleBox::mousePressEvent (QMouseEvent *e)
{
  emit mousePressSignal (e);
}



//!  Released a mouse button.  Emit a signal.

void
scaleBox::mouseReleaseEvent (QMouseEvent *e)
{
  emit mouseReleaseSignal (e);
}
