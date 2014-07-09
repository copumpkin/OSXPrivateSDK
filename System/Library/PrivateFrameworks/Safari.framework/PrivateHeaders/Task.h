//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTask.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface Task : NSTask
{
    NSString *_launchPath;
    NSArray *_arguments;
    NSDictionary *_environment;
    id _standardInput;
    id _standardOutput;
    int _pid;
    BOOL _didSpawn;
    int _terminationStatus;
    struct __CFFileDescriptor *_monitoringFileDescriptor;
}

- (void)_childProcessDidTerminateWithStatus:(int)arg1;
- (int)terminationStatus;
- (long long)terminationReason;
- (int)processIdentifier;
- (void)terminate;
- (void)launch;
- (id)standardOutput;
- (id)standardInput;
- (id)environment;
- (id)arguments;
- (id)launchPath;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)dealloc;

@end
