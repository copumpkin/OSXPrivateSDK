//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArrayController.h"

@class NSMutableArray, NSString;

@interface ILMediaObjectsArrayController : NSArrayController
{
    unsigned long long _currentMediaType;
    NSMutableArray *_searchAttributeKeys;
    NSString *_searchString;
    id _filterDelegate;
}

- (id)stripAccentsFromString:(id)arg1;
- (BOOL)checkKeywords:(id)arg1 withString:(id)arg2;
- (id)arrangeObjects:(id)arg1;
- (void)search:(id)arg1;
- (void)setSearchAttributeKeys:(id)arg1;
- (id)searchAttributeKeys;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (id)filterDelegate;
- (void)setFilterDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
