//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MediaUIKeyBindingSignature : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long modifierFlags;
@property(readonly) NSString *charactersIgnoringModifiers;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharactersIgnoringModifiers:(id)arg1 modifierFlags:(unsigned long long)arg2;

@end

