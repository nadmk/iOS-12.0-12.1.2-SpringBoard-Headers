//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBFolder;

@interface SBIconPreviousLocationInfo : NSObject
{
    SBFolder *_folder;
    NSString *_folderName;
}

@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(nonatomic) __weak SBFolder *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;

@end

