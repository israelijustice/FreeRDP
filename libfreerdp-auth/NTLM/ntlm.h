/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * NTLM Security Package
 *
 * Copyright 2011-2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <freerdp/auth/sspi.h>
#include <freerdp/auth/credssp.h>

#ifndef FREERDP_AUTH_NTLM_PRIVATE_H
#define FREERDP_AUTH_NTLM_PRIVATE_H

struct _NTLM_CONTEXT
{
	SEC_AUTH_IDENTITY identity;
};
typedef struct _NTLM_CONTEXT NTLM_CONTEXT;

#endif /* FREERDP_AUTH_NTLM_PRIVATE_H */