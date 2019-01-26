//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBChestnutController : NSObject
{
    unsigned long long _effectiveChestnutValue;
    unsigned long long _fileState;
    unsigned long long _requestState;
    unsigned long long _retryAttemptNumber;
}

- (void)_startNetworkRequestAfterDelay:(double)arg1;
- (void)_attemptFetchChestnutIfAppropriate;
- (unsigned long long)_chestnutValueFromDictionary:(id)arg1;
- (unsigned long long)_attemptReadingFromDisk;
@property(readonly, nonatomic) unsigned long long chestnutKey1Value;
- (id)init;

@end

