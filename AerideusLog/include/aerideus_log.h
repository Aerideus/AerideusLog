/*
	Author: @rasmushugosson
	Last modified: 2023-03-22

	Aerideus Log is a lightweight and easy to use library for console and file
	logging. For information about usage and features, please see documentation 
	(README.md) at https://github.com/Aerideus/AerideusLog. 

	Please read the following license information before use:

	====================================================================================
    
                                     Apache License
                               Version 2.0, January 2004
                            http://www.apache.org/licenses/
    
    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
    
    1. Definitions.
    
       "License" shall mean the terms and conditions for use, reproduction,
       and distribution as defined by Sections 1 through 9 of this document.
    
       "Licensor" shall mean the copyright owner or entity authorized by
       the copyright owner that is granting the License.
    
       "Legal Entity" shall mean the union of the acting entity and all
       other entities that control, are controlled by, or are under common
       control with that entity. For the purposes of this definition,
       "control" means (i) the power, direct or indirect, to cause the
       direction or management of such entity, whether by contract or
       otherwise, or (ii) ownership of fifty percent (50%) or more of the
       outstanding shares, or (iii) beneficial ownership of such entity.
    
       "You" (or "Your") shall mean an individual or Legal Entity
       exercising permissions granted by this License.
    
       "Source" form shall mean the preferred form for making modifications,
       including but not limited to software source code, documentation
       source, and configuration files.
    
       "Object" form shall mean any form resulting from mechanical
       transformation or translation of a Source form, including but
       not limited to compiled object code, generated documentation,
       and conversions to other media types.
    
       "Work" shall mean the work of authorship, whether in Source or
       Object form, made available under the License, as indicated by a
       copyright notice that is included in or attached to the work
       (an example is provided in the Appendix below).
    
       "Derivative Works" shall mean any work, whether in Source or Object
       form, that is based on (or derived from) the Work and for which the
       editorial revisions, annotations, elaborations, or other modifications
       represent, as a whole, an original work of authorship. For the purposes
       of this License, Derivative Works shall not include works that remain
       separable from, or merely link (or bind by name) to the interfaces of,
       the Work and Derivative Works thereof.
    
       "Contribution" shall mean any work of authorship, including
       the original version of the Work and any modifications or additions
       to that Work or Derivative Works thereof, that is intentionally
       submitted to Licensor for inclusion in the Work by the copyright owner
       or by an individual or Legal Entity authorized to submit on behalf of
       the copyright owner. For the purposes of this definition, "submitted"
       means any form of electronic, verbal, or written communication sent
       to the Licensor or its representatives, including but not limited to
       communication on electronic mailing lists, source code control systems,
       and issue tracking systems that are managed by, or on behalf of, the
       Licensor for the purpose of discussing and improving the Work, but
       excluding communication that is conspicuously marked or otherwise
       designated in writing by the copyright owner as "Not a Contribution."
    
       "Contributor" shall mean Licensor and any individual or Legal Entity
       on behalf of whom a Contribution has been received by Licensor and
       subsequently incorporated within the Work.
    
    2. Grant of Copyright License. Subject to the terms and conditions of
       this License, each Contributor hereby grants to You a perpetual,
       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
       copyright license to reproduce, prepare Derivative Works of,
       publicly display, publicly perform, sublicense, and distribute the
       Work and such Derivative Works in Source or Object form.
    
    3. Grant of Patent License. Subject to the terms and conditions of
       this License, each Contributor hereby grants to You a perpetual,
       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
       (except as stated in this section) patent license to make, have made,
       use, offer to sell, sell, import, and otherwise transfer the Work,
       where such license applies only to those patent claims licensable
       by such Contributor that are necessarily infringed by their
       Contribution(s) alone or by combination of their Contribution(s)
       with the Work to which such Contribution(s) was submitted. If You
       institute patent litigation against any entity (including a
       cross-claim or counterclaim in a lawsuit) alleging that the Work
       or a Contribution incorporated within the Work constitutes direct
       or contributory patent infringement, then any patent licenses
       granted to You under this License for that Work shall terminate
       as of the date such litigation is filed.
    
    4. Redistribution. You may reproduce and distribute copies of the
       Work or Derivative Works thereof in any medium, with or without
       modifications, and in Source or Object form, provided that You
       meet the following conditions:
    
       (a) You must give any other recipients of the Work or
           Derivative Works a copy of this License; and
    
       (b) You must cause any modified files to carry prominent notices
           stating that You changed the files; and
    
       (c) You must retain, in the Source form of any Derivative Works
           that You distribute, all copyright, patent, trademark, and
           attribution notices from the Source form of the Work,
           excluding those notices that do not pertain to any part of
           the Derivative Works; and
    
       (d) If the Work includes a "NOTICE" text file as part of its
           distribution, then any Derivative Works that You distribute must
           include a readable copy of the attribution notices contained
           within such NOTICE file, excluding those notices that do not
           pertain to any part of the Derivative Works, in at least one
           of the following places: within a NOTICE text file distributed
           as part of the Derivative Works; within the Source form or
           documentation, if provided along with the Derivative Works; or,
           within a display generated by the Derivative Works, if and
           wherever such third-party notices normally appear. The contents
           of the NOTICE file are for informational purposes only and
           do not modify the License. You may add Your own attribution
           notices within Derivative Works that You distribute, alongside
           or as an addendum to the NOTICE text from the Work, provided
           that such additional attribution notices cannot be construed
           as modifying the License.
    
       You may add Your own copyright statement to Your modifications and
       may provide additional or different license terms and conditions
       for use, reproduction, or distribution of Your modifications, or
       for any such Derivative Works as a whole, provided Your use,
       reproduction, and distribution of the Work otherwise complies with
       the conditions stated in this License.
    
    5. Submission of Contributions. Unless You explicitly state otherwise,
       any Contribution intentionally submitted for inclusion in the Work
       by You to the Licensor shall be under the terms and conditions of
       this License, without any additional terms or conditions.
       Notwithstanding the above, nothing herein shall supersede or modify
       the terms of any separate license agreement you may have executed
       with Licensor regarding such Contributions.
    
    6. Trademarks. This License does not grant permission to use the trade
       names, trademarks, service marks, or product names of the Licensor,
       except as required for reasonable and customary use in describing the
       origin of the Work and reproducing the content of the NOTICE file.
    
    7. Disclaimer of Warranty. Unless required by applicable law or
       agreed to in writing, Licensor provides the Work (and each
       Contributor provides its Contributions) on an "AS IS" BASIS,
       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
       implied, including, without limitation, any warranties or conditions
       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
       PARTICULAR PURPOSE. You are solely responsible for determining the
       appropriateness of using or redistributing the Work and assume any
       risks associated with Your exercise of permissions under this License.
    
    8. Limitation of Liability. In no event and under no legal theory,
       whether in tort (including negligence), contract, or otherwise,
       unless required by applicable law (such as deliberate and grossly
       negligent acts) or agreed to in writing, shall any Contributor be
       liable to You for damages, including any direct, indirect, special,
       incidental, or consequential damages of any character arising as a
       result of this License or out of the use or inability to use the
       Work (including but not limited to damages for loss of goodwill,
       work stoppage, computer failure or malfunction, or any and all
       other commercial damages or losses), even if such Contributor
       has been advised of the possibility of such damages.
    
    9. Accepting Warranty or Additional Liability. While redistributing
       the Work or Derivative Works thereof, You may choose to offer,
       and charge a fee for, acceptance of support, warranty, indemnity,
         or other liability obligations and/or rights consistent with this
       License. However, in accepting such obligations, You may act only
       on Your own behalf and on Your sole responsibility, not on behalf
       of any other Contributor, and only if You agree to indemnify,
       defend, and hold each Contributor harmless for any liability
       incurred by, or claims asserted against, such Contributor by reason
       of your accepting any such warranty or additional liability.
    
    END OF TERMS AND CONDITIONS
    
    APPENDIX: How to apply the Apache License to your work.
    
       To apply the Apache License to your work, attach the following
       boilerplate notice, with the fields enclosed by brackets "[]"
       replaced with your own identifying information. (Don't include
       the brackets!)  The text should be enclosed in the appropriate
       comment syntax for the file format. We also recommend that a
       file or class name and description of purpose be included on the
       same "printed page" as the copyright notice for easier
       identification within third-party archives.
    
    Copyright [yyyy] [name of copyright owner]
    
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

	====================================================================================

    Copyright (c) 2023 Aerideus

*/

#include <stdio.h>

// Severity level -----------------------------------------------------------------------------------------------

/// <summary>
/// Used to specifies severity level of Aerides log messages.
/// </summary>
typedef enum {
	TRACE = 0, INFO, WARNING, ERROR, FATAL
} log_level;

/// <summary>
/// Sets the minimum severity required for a console messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
void ae_log_console_level_set(log_level min);

/// <summary>
/// Sets the minimum severity required for a console messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
#define AE_LOG_CONSOLE_LEVEL_SET(min) ae_log_console_level_set(min)

/// <summary>
/// Sets the minimum severity required for a file messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
void ae_log_file_level_set(log_level min);

/// <summary>
/// Sets the minimum severity required for a file messages to be logged.
/// </summary>
/// <param name="min">is the minimum log_level that will be logged</param>
#define AE_LOG_FILE_LEVEL_SET(min) ae_log_file_level_set(min)

// Console ------------------------------------------------------------------------------------------------------

/// <summary>
/// Internal function that should only be called through macros. (AE_LOG_CONSOLE_...)
/// </summary>
/// <param name="l">should not be specified</param>
/// <param name="fn">should not be specified</param>
/// <param name="ln">should not be specified</param>
/// <param name="f">should not be specified</param>
void i_ae_log_console(log_level l, const char* fn, int ln, const char* f, ...);

/// <summary>
/// Internal macro that should not be used
/// </summary>
#define I_AE_LOCATION __FILE__, __LINE__

/// <summary>
/// Logs a message to the console regardless of build type.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE(l, f, ...) i_ae_log_console(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the console regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_TRACE(f, ...) i_ae_log_console(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the console regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_INFO(f, ...) i_ae_log_console(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the console regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_WARNING(f, ...) i_ae_log_console(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the console regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_ERROR(f, ...) i_ae_log_console(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the console regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_FATAL(f, ...) i_ae_log_console(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

#ifdef AE_DEBUG

/// <summary>
/// Logs a message to the console when the build type is Debug.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG(l, f, ...) i_ae_log_console(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the console when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_TRACE(f, ...) i_ae_log_console(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the console when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_INFO(f, ...) i_ae_log_console(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the console when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_WARNING(f, ...) i_ae_log_console(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the console when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_ERROR(f, ...) i_ae_log_console(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the console when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_FATAL(f, ...) i_ae_log_console(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a message to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE(l, f, ...)

/// <summary>
/// Logs a trace message to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_TRACE(f, ...)

/// <summary>
/// Logs an information message to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_INFO(f, ...)

/// <summary>
/// Logs a warning to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_WARNING(f, ...)

/// <summary>
/// Logs an error to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_FATAL(f, ...)

/// <summary>
/// Logs a message to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST(l, f, ...)

/// <summary>
/// Logs a trace message to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_TRACE(f, ...)

/// <summary>
/// Logs an information message to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_INFO(f, ...)

/// <summary>
/// Logs a warning to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_WARNING(f, ...)

/// <summary>
/// Logs an error to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_FATAL(f, ...)

#endif // AE_DEBUG

#ifdef AE_RELEASE

/// <summary>
/// Logs a message to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG(l, f, ...)

/// <summary>
/// Logs a trace message to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_TRACE(f, ...)

/// <summary>
/// Logs an information message to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_INFO(f, ...)

/// <summary>
/// Logs a warning to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_WARNING(f, ...)

/// <summary>
/// Logs an error to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_FATAL(f, ...)

/// <summary>
/// Logs a message to the console when the build type is Release.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE(l, f, ...) i_ae_log_console(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the console when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_TRACE(f, ...) i_ae_log_console(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the console when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_INFO(f, ...) i_ae_log_console(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the console when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_WARNING(f, ...) i_ae_log_console(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the console when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_ERROR(f, ...) i_ae_log_console(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the console when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_FATAL(f, ...) i_ae_log_console(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a message to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST(l, f, ...)

/// <summary>
/// Logs a trace message to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_TRACE(f, ...)

/// <summary>
/// Logs an information message to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_INFO(f, ...)

/// <summary>
/// Logs a warning to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_WARNING(f, ...)

/// <summary>
/// Logs an error to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_FATAL(f, ...)

#endif // AE_RELEASE

#ifdef AE_DIST

/// <summary>
/// Logs a message to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG(l, f, ...)

/// <summary>
/// Logs a trace message to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_TRACE(f, ...)

/// <summary>
/// Logs an information message to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_INFO(f, ...)

/// <summary>
/// Logs a warning to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_WARNING(f, ...)

/// <summary>
/// Logs an error to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DEBUG_FATAL(f, ...)

/// <summary>
/// Logs a message to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE(l, f, ...)

/// <summary>
/// Logs a trace message to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_TRACE(f, ...)

/// <summary>
/// Logs an information message to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_INFO(f, ...)

/// <summary>
/// Logs a warning to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_WARNING(f, ...)

/// <summary>
/// Logs an error to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_RELEASE_FATAL(f, ...)

/// <summary>
/// Logs a message to the console when the build type is Dist.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST(l, f, ...) i_ae_log_console(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the console when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_TRACE(f, ...) i_ae_log_console(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the console when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_INFO(f, ...) i_ae_log_console(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the console when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_WARNING(f, ...) i_ae_log_console(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the console when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_ERROR(f, ...) i_ae_log_console(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the console when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_CONSOLE_DIST_FATAL(f, ...) i_ae_log_console(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

#endif // AE_DIST

/// <summary>
/// Logs a blank line to the console regardless of build type.
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE() printf("\n")

#ifdef AE_DEBUG

/// <summary>
/// Logs a blank line to the console when the build type is Debug.
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_DEBUG() printf("\n")
/// <summary>
/// Logs a blank line to the console when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_RELEASE()
/// <summary>
/// Logs a blank line to the console when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_DIST()

#endif // AE_DEBUG

#ifdef AE_RELEASE

/// <summary>
/// Logs a blank line to the console when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_DEBUG() 
/// <summary>
/// Logs a blank line to the console when the build type is Release.
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_RELEASE() printf("\n")
/// <summary>
/// Logs a blank line to the console when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_DIST()

#endif // AE_RELEASE

#ifdef AE_DIST

/// <summary>
/// Logs a blank line to the console when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_DEBUG()
/// <summary>
/// Logs a blank line to the console when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_RELEASE()
/// <summary>
/// Logs a blank line to the console when the build type is Dist.
/// </summary>
#define AE_LOG_CONSOLE_NEXT_LINE_DIST() printf("\n")

#endif // AE_DIST


// File ---------------------------------------------------------------------------------------------------------

/// <summary>
/// Internal function that should only be called through macros. (AE_LOG_CONSOLE_...)
/// </summary>
/// <param name="l">should not be specified</param>
/// <param name="fn">should not be specified</param>
/// <param name="ln">should not be specified</param>
/// <param name="f">should not be specified</param>
void i_ae_log_file(log_level l, const char* fn, int ln, const char* f, ...);

/// <summary>
/// Exports the log file to a specified path and frees allocated memory.
/// </summary>
/// <param name="p">is the desired path and must end with '.txt'</param>
void ae_log_file_export(const char* p);

/// <summary>
/// Exports the log file to a specified path and frees allocated memory.
/// </summary>
/// <param name="p">is the desired path and must end with '.txt'</param>
#define AE_LOG_FILE_EXPORT(p) ae_log_file_export(p)

/// <summary>
/// Logs a message to the log file regardless of build type.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE(l, f, ...) i_ae_log_file(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the log file regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_TRACE(f, ...) i_ae_log_file(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the log file regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_INFO(f, ...) i_ae_log_file(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the log file regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_WARNING(f, ...) i_ae_log_file(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the log file regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_ERROR(f, ...) i_ae_log_file(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the log file regardless of build type.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_FATAL(f, ...) i_ae_log_file(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

#ifdef AE_DEBUG

/// <summary>
/// Logs a message to the log file when the build type is Debug.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG(l, f, ...) i_ae_log_file(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the log file when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_TRACE(f, ...) i_ae_log_file(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the log file when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_INFO(f, ...) i_ae_log_file(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the log file when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_WARNING(f, ...) i_ae_log_file(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the log file when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_ERROR(f, ...) i_ae_log_file(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the log file when the build type is Debug.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_FATAL(f, ...) i_ae_log_file(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a message to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE(l, f, ...)

/// <summary>
/// Logs a trace message to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_TRACE(f, ...)

/// <summary>
/// Logs an information message to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_INFO(f, ...)

/// <summary>
/// Logs a warning to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_WARNING(f, ...)

/// <summary>
/// Logs an error to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_FATAL(f, ...)

/// <summary>
/// Logs a message to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST(l, f, ...)

/// <summary>
/// Logs a trace message to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_TRACE(f, ...)

/// <summary>
/// Logs an information message to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_INFO(f, ...)

/// <summary>
/// Logs a warning to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_WARNING(f, ...)

/// <summary>
/// Logs an error to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_FATAL(f, ...)

#endif // AE_DEBUG

#ifdef AE_RELEASE

/// <summary>
/// Logs a message to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG(l, f, ...)

/// <summary>
/// Logs a trace message to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_TRACE(f, ...)

/// <summary>
/// Logs an information message to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_INFO(f, ...)

/// <summary>
/// Logs a warning to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_WARNING(f, ...)

/// <summary>
/// Logs an error to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_FATAL(f, ...)

/// <summary>
/// Logs a message to the log file when the build type is Release.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE(l, f, ...) i_ae_log_file(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the log file when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_TRACE(f, ...) i_ae_log_file(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the log file when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_INFO(f, ...) i_ae_log_file(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the log file when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_WARNING(f, ...) i_ae_log_file(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the log file when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_ERROR(f, ...) i_ae_log_file(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the log file when the build type is Release.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_FATAL(f, ...) i_ae_log_file(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a message to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST(l, f, ...)

/// <summary>
/// Logs a trace message to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_TRACE(f, ...)

/// <summary>
/// Logs an information message to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_INFO(f, ...)

/// <summary>
/// Logs a warning to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_WARNING(f, ...)

/// <summary>
/// Logs an error to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_FATAL(f, ...)

#endif // AE_RELEASE

#ifdef AE_DIST

/// <summary>
/// Logs a message to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG(l, f, ...)

/// <summary>
/// Logs a trace message to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_TRACE(f, ...)

/// <summary>
/// Logs an information message to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_INFO(f, ...)

/// <summary>
/// Logs a warning to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_WARNING(f, ...)

/// <summary>
/// Logs an error to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DEBUG_FATAL(f, ...)

/// <summary>
/// Logs a message to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE(l, f, ...)

/// <summary>
/// Logs a trace message to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_TRACE(f, ...)

/// <summary>
/// Logs an information message to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_INFO(f, ...)

/// <summary>
/// Logs a warning to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_WARNING(f, ...)

/// <summary>
/// Logs an error to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_ERROR(f, ...)

/// <summary>
/// Logs a fatal error to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_RELEASE_FATAL(f, ...)

/// <summary>
/// Logs a message to the log file when the build type is Dist.
/// </summary>
/// <param name="l">is the log_level (severity) of the message</param>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST(l, f, ...) i_ae_log_file(l, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a trace message to the log file when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_TRACE(f, ...) i_ae_log_file(TRACE, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an information message to the log file when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_INFO(f, ...) i_ae_log_file(INFO, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a warning to the log file when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_WARNING(f, ...) i_ae_log_file(WARNING, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs an error to the log file when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_ERROR(f, ...) i_ae_log_file(ERROR, I_AE_LOCATION, f, ##__VA_ARGS__)

/// <summary>
/// Logs a fatal error to the log file when the build type is Dist.
/// </summary>
/// <param name="f">is the message format as a const char*</param>
/// <param name="__VA_ARGS__">is additional arguments to be inserted</param>
#define AE_LOG_FILE_DIST_FATAL(f, ...) i_ae_log_file(FATAL, I_AE_LOCATION, f, ##__VA_ARGS__)

#endif // AE_DIST

/// <summary>
/// Internal function that should only be called through macros. (AE_LOG_FILE_NEXT_LINE_...)
/// </summary>
void i_ae_log_file_next_line();

/// <summary>
/// Logs a blank line to the log file regardless of build type.
/// </summary>
#define AE_LOG_FILE_NEXT_LINE() i_ae_log_file_next_line()

#ifdef AE_DEBUG

/// <summary>
/// Logs a blank line to the log file when the build type is Debug.
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_DEBUG() i_ae_log_file_next_line()
/// <summary>
/// Logs a blank line to the log file when the build type is Release. (Removed since build type is currently Debug)
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_RELEASE()
/// <summary>
/// Logs a blank line to the log file when the build type is Dist. (Removed since build type is currently Debug)
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_DIST()

#endif // AE_DEBUG

#ifdef AE_RELEASE

/// <summary>
/// Logs a blank line to the log file when the build type is Debug. (Removed since build type is currently Release)
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_DEBUG() 
/// <summary>
/// Logs a blank line to the log file when the build type is Release.
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_RELEASE() i_ae_log_file_next_line()
/// <summary>
/// Logs a blank line to the log file when the build type is Dist. (Removed since build type is currently Release)
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_DIST()

#endif // AE_RELEASE

#ifdef AE_DIST

/// <summary>
/// Logs a blank line to the log file when the build type is Debug. (Removed since build type is currently Dist)
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_DEBUG()
/// <summary>
/// Logs a blank line to the log file when the build type is Release. (Removed since build type is currently Dist)
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_RELEASE()
/// <summary>
/// Logs a blank line to the log file when the build type is Dist.
/// </summary>
#define AE_LOG_FILE_NEXT_LINE_DIST() i_ae_log_file_next_line()

#endif // AE_DIST
