//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedControl.h"

@class NSMenu, NSString, SOFaceTimeButtonDelegate;

@interface SOFaceTimeButton : NSSegmentedControl
{
    SOFaceTimeButtonDelegate *_faceTimeButtonDelegate;
    NSMenu *_menu;
}

@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) SOFaceTimeButtonDelegate *faceTimeButtonDelegate; // @synthesize faceTimeButtonDelegate=_faceTimeButtonDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *abPersonID; // @dynamic abPersonID;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;

@end
