//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSItemIdType, NSDate;

@interface EWSOccurrenceInfoType : NSObject
{
    EWSItemIdType *ItemId;
    NSDate *Start;
    NSDate *End;
    NSDate *OriginalStart;
}

+ (id)definition;
@property(retain, nonatomic) NSDate *OriginalStart; // @synthesize OriginalStart;
@property(retain, nonatomic) NSDate *End; // @synthesize End;
@property(retain, nonatomic) NSDate *Start; // @synthesize Start;
@property(retain, nonatomic) EWSItemIdType *ItemId; // @synthesize ItemId;
- (void)dealloc;
- (id)description;

@end

