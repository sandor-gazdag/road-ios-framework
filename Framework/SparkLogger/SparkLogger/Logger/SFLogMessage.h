//
//  SFLogMessage.h
//  ROADLogger
//
//  Copyright (c) 2013 Epam Systems. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions are met:
// 
//  Redistributions of source code must retain the above copyright notice, this 
// list of conditions and the following disclaimer.
//  Redistributions in binary form must reproduce the above copyright notice, this 
// list of conditions and the following disclaimer in the documentation and/or 
// other materials provided with the distribution.
//  Neither the name of the EPAM Systems, Inc.  nor the names of its contributors 
// may be used to endorse or promote products derived from this software without 
// specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE 
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// See the NOTICE file and the LICENSE file distributed with this work
// for additional information regarding copyright ownership and licensing

extern NSString * const kSFLogMessageTypeAllLoggers;
extern NSString * const kSFLogMessageTypeNetworkOnly;
extern NSString * const kSFLogMessageTypeConsoleOnly;
extern NSString * const kSFLogMessageTypeWebServiceOnly;
extern NSString * const kSFLogMessageTypeFileOnly;
extern NSString * const kSFLogMessageTypeNoLogging;

typedef NS_ENUM(NSInteger, SFLogLevel) {
    
    SFLogLevelInfo = -1000,
    SFLogLevelDebug = -1001,
    SFLogLevelWarning = -1002,
    SFLogLevelError = -1003
    
};

/**
 The log message encapsulation object.
 */
@interface SFLogMessage : NSObject <NSCoding, NSCopying>

/**
 The actual log message string.
 */
@property (copy, nonatomic) NSString *message;

/**
 The type of the log message, string.
 */
@property (copy, nonatomic) NSString *type;

/**
 The date and time the log message was generated.
 */
@property (strong, nonatomic) NSDate *timeStamp;

/**
 The userinfo dictionary of the log message. Can be used to attach extra information into the log message.
 */
@property (strong, nonatomic) NSDictionary *userInfo;

/**
 The level of the log - info, debug, warning, or error.
 */
@property (assign, nonatomic) SFLogLevel level;

/**
 Factory method for creating a log message.
 @param messageText The message text.
 @param type The message type.
 @param level The log level of the message.
 @param userInfo The userInfo dictionary for the log message.
 */
+ (SFLogMessage *)logMessage:(NSString * const)messageText type:(NSString * const)type level:(SFLogLevel const)level userInfo:(NSDictionary * const)userInfo;

/**
 * Creates log message with predefined log type SFLogLevelInfo and specified message text.
 * @param messageText The text of message for intialization message object.
 */
+ (SFLogMessage *)infoMessage:(NSString * const)messageText;

/**
 * Creates log message with predefined log type SFLogLevelDebug and specified message text.
 * @param messageText The text of message for intialization message object.
 */
+ (SFLogMessage *)debugMessage:(NSString * const)messageText;

/**
 * Creates log message with predefined log type SFLogLevelWarning and specified message text.
 * @param messageText The text of message for intialization message object.
 */
+ (SFLogMessage *)warningMessage:(NSString * const)messageText;

/**
 * Creates log message with predefined log type SFLogLevelError and specified message text.
 * @param messageText The text of message for intialization message object.
 */
+ (SFLogMessage *)errorMessage:(NSString * const)messageText;

/**
 * Creates log message with predefined log type SFLogLevelInfo and specified message text and type.
 * @param messageText The text of message for intialization message object.
 * @param type The type of message for initialization message object.
 */
+ (SFLogMessage *)infoMessage:(NSString * const)messageText type:(NSString *)type;

/**
 * Creates log message with predefined log type SFLogLevelDebug and specified message text and type.
 * @param messageText The text of message for intialization message object.
 * @param type The type of message for initialization message object.
 */
+ (SFLogMessage *)debugMessage:(NSString * const)messageText type:(NSString *)type;

/**
 * Creates log message with predefined log type SFLogLevelWarning and specified message text and type.
 * @param messageText The text of message for intialization message object.
 * @param type The type of message for initialization message object.
 */
+ (SFLogMessage *)warningMessage:(NSString * const)messageText type:(NSString *)type;

/**
 * Creates log message with predefined log type SFLogLevelError and specified message text and type.
 * @param messageText The text of message for intialization message object.
 * @param type The type of message for initialization message object.
 */
+ (SFLogMessage *)errorMessage:(NSString * const)messageText type:(NSString *)type;

@end
