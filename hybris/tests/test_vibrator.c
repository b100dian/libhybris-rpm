/*
 * Copyright (C) 2014 Jolla Ltd.
 * Contact: Simonas Leleiva <simonas.leleiva@jollamobile.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <android-config.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <hardware_legacy/vibrator.h>

int main(int argc, char **argv)
{
	// Android mistakenly reports that vibrator does not exist:
	//assert(vibrator_exists() != 0);

	if (vibrator_on(1000) < 0) {
		printf("ERROR: vibrator failed to vibrate\n");
		exit(1);
	}

	return 0;
}

// vim:ts=4:sw=4:noexpandtab
