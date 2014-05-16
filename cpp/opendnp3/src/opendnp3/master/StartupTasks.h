/**
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */

#ifndef __STARTUP_TASKS_H_
#define __STARTUP_TASKS_H_

#include "opendnp3/master/ClearRestartTask.h"
#include "opendnp3/master/EnableUnsolicitedTask.h"
#include "opendnp3/master/StartupIntegrityPoll.h"
#include "opendnp3/master/DisableUnsolicitedTask.h"

namespace opendnp3
{

class StartupTasks
{

public:

	StartupTasks(openpal::Logger* pLogger, ISOEHandler* pSOEHandler);

	EnableUnsolicitedTask enableUnsol;
	ClearRestartTask clearRestartTask;
	StartupIntegrityPoll startupIntegrity;
	DisableUnsolicitedTask disableUnsol;
	
};

}



#endif
