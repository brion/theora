/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggTheora SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS LIBRARY SOURCE IS     *
 * GOVERNED BY A BSD-STYLE SOURCE LICENSE INCLUDED WITH THIS SOURCE *
 * IN 'COPYING'. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.       *
 *                                                                  *
 * THE OggVorbis SOURCE CODE IS (C) COPYRIGHT 1994-2002             *
 * by the Xiph.Org Foundation http://www.xiph.org/                  *
 *                                                                  *
 ********************************************************************

  function: 
  last mod: $Id: pp.h,v 1.1 2002/09/20 09:30:32 xiphmont Exp $

 ********************************************************************/

/* Constants. */
#define INTERNAL_BLOCK_HEIGHT   8
#define INTERNAL_BLOCK_WIDTH    8


/* NEW Line search values. */ 
#define UP      0
#define DOWN    1
#define LEFT    2
#define RIGHT   3

#define FIRST_ROW           0
#define NOT_EDGE_ROW        1
#define LAST_ROW            2      

#define YDIFF_CB_ROWS                   (INTERNAL_BLOCK_HEIGHT * 3)
#define CHLOCALS_CB_ROWS                (INTERNAL_BLOCK_HEIGHT * 3)
#define PMAP_CB_ROWS                    (INTERNAL_BLOCK_HEIGHT * 3)
#define PSCORE_CB_ROWS                  (INTERNAL_BLOCK_HEIGHT * 4)

// Status values in block coding map
#define CANDIDATE_BLOCK_LOW                     -2
#define CANDIDATE_BLOCK                         -1
#define BLOCK_NOT_CODED                         0
#define BLOCK_CODED_BAR                         3       
#define BLOCK_CODED_SGC                         4       
#define BLOCK_CODED_LOW                         4       
#define BLOCK_CODED                             5       

#define MAX_PREV_FRAMES             16
#define MAX_SEARCH_LINE_LEN                     7   

