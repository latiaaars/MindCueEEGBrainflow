/*
 * License: eego amplifier Interface SDK, rev. 1.3
 *
 *
 * Copyright 2018, eemagine Medical Imaging Solutions GmbH
 *
 *
 * 1. Redistributions of source code must retain the copyright notice this list of conditions and
 * the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of
 * conditions and the following disclaimer in the documentation and/or other materials provided with
 * the distribution.
 *
 * 3. All advertising materials mentioning features or use of this software must display the
 * following acknowledgement: This product includes software developed by the eemagine Medical
 * Imaging Solutions GmbH.
 *
 * 4. Neither the name of the eemagine Medical Imaging Solutions GmbH nor the names of its
 * contributors or products may be used to endorse or promote products derived from this software
 * without specific prior written permission by eemagine
 *
 *
 * This Software is provided by eemagine Medical Imaging Solutions GmbH ''As Is'' and any express or
 * implied warranties, including, but not limited to, the implied warranties merchantability and
 * fitness for a particular purpose are disclaimed. In no event shall eemagine be liable for any
 * direct, indirect, incidental, special, exemplary, or consequential damages (including but not
 * limited to, procurement of substitute goods or services, loss of use, data, or profits, or
 * business interruption) however caused and on any theory of liability, whether in contract, strict
 * liability, or tort (including negligence or otherwise) arising in any way out of the use of this
 * software, even if advised of the possibility of such damage.
 *
 * The eego amplifier comes with its own user manual, which must be read carefully before making use
 * of this SDK or any derived software.
 *
 *
 * You need to run full testing and qualification based on your own requirements to claim any
 * performance of the combined system.
 *
 *
 * Please be especially advised that any certification holding for the eego amplifier is not valid
 * for a combined system of your application software and the eego amplifier. You must obtain your
 * own certification for a combined system of amplifier and software.
 */

#ifndef __eemagine_sdk_exceptions_h__
#define __eemagine_sdk_exceptions_h__

// system
#include <stdexcept>

namespace eemagine
{
    namespace sdk
    {
        namespace exceptions
        {
            ///////////////////////////////////////////////////////////////////////////////
            /**
             * exception to be used when there is no connection
             */
            class notConnected : public std::runtime_error
            {
            public:
                explicit notConnected (const std::string &msg) : std::runtime_error (msg)
                {
                }
            };
            ///////////////////////////////////////////////////////////////////////////////
            /**
             * exception to be used when something already exists
             */
            class alreadyExists : public std::runtime_error
            {
            public:
                explicit alreadyExists (const std::string &msg) : std::runtime_error (msg)
                {
                }
            };
            ///////////////////////////////////////////////////////////////////////////////
            /**
             * exception to be used when something is not found
             */
            class notFound : public std::runtime_error
            {
            public:
                explicit notFound (const std::string &msg) : std::runtime_error (msg)
                {
                }
            };
            ///////////////////////////////////////////////////////////////////////////////
            /**
             * can be used if an incorrect value is used
             */
            class incorrectValue : public std::runtime_error
            {
            public:
                explicit incorrectValue (const std::string &msg) : std::runtime_error (msg)
                {
                }
            };
            /**
             * can be used if an internal error occured
             */
            class internalError : public std::runtime_error
            {
            public:
                explicit internalError (const std::string &msg) : std::runtime_error (msg)
                {
                }
            };
            ///////////////////////////////////////////////////////////////////////////////
            /**
             * can be used if an unknown error occurred
             */
            class unknown : public std::runtime_error
            {
            public:
                explicit unknown (const std::string &msg) : std::runtime_error (msg)
                {
                }
            };
        }
    }
}

#endif
