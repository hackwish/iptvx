/*

   Copyright 2018   Jan Kammerath

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/
#include <glib.h>
#include "recording.h"

/*
   Initialises and opens the database
   @param         filename       file path of the db file
*/
void iptvx_db_init(char* filename);

/*
   Removes a recording from the database
   @param         rec         the recording to remove from database
*/
void iptvx_db_remove_recording(recording* rec);

/*
   Updates the recording in the database
   @param         reclist        array with all current recordings
*/
void iptvx_db_update_recording(GArray* reclist);

/*
   Returns a list of all recordings from the database
   @return           an array with all recordings in the database
*/
GArray* iptvx_db_get_recording_list();

/*
   Gets the programme for a given channel from the database
   @param            channelname       name of the channel to get program for
   @return                             returns an array with all programmes for the channel
*/
GArray* iptvx_db_get_channel_programme(GString* channelname);

/*
   Updates the database with epg data
   @param      epg      array with all epg data
   @param      min_age  minimum age of epg data in hours
*/
void iptvx_db_update(GArray* epg, int min_age);

/*
   Returns the timestamp of the last epg update of a channel
   @param         channelname    name of the channel to get timestamp for
   @return                       long with timestamp of last epg update
*/
long iptvx_db_get_channel_last_updated(GString* channelname);

/*
   Closes the database
*/
void iptvx_db_close();