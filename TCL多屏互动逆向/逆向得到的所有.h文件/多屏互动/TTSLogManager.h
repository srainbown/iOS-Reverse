//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LogManager.h"

@class NSDate;

@interface TTSLogManager : LogManager
{
    NSDate *_sessionBeginDate;
    NSDate *_firstDataArrived;
    BOOL _isFirstDataArrived;
}

- (void)writeLogFileOnMainThread;
- (void)writeLogFile;
- (void)dataArrived;
- (void)sessionBegin;
- (void)generateInfo;
- (void)dealloc;
- (id)init;

@end

