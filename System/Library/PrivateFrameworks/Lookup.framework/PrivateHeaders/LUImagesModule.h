//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Lookup/LUModule.h>

@class LUImageInfo, NSImageView, NSMutableArray, NSTimer, NSViewAnimation;

@interface LUImagesModule : LUModule
{
    NSMutableArray *_images;
    unsigned long long _thumbnailsToDownload;
    NSImageView *_previewImageView;
    LUImageInfo *_previewImageInfo;
    NSTimer *_previewImageTimer;
    NSViewAnimation *_previewAnimation;
    struct _xpc_connection_s *_lookupdConnection;
}

+ (id)imageSearchProvider;
+ (BOOL)hasDetailMode;
@property(retain) NSViewAnimation *previewAnimation; // @synthesize previewAnimation=_previewAnimation;
@property(retain) NSTimer *previewImageTimer; // @synthesize previewImageTimer=_previewImageTimer;
@property(retain) LUImageInfo *previewImageInfo; // @synthesize previewImageInfo=_previewImageInfo;
@property(retain) NSImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property unsigned long long thumbnailsToDownload; // @synthesize thumbnailsToDownload=_thumbnailsToDownload;
@property(retain) NSMutableArray *images; // @synthesize images=_images;
- (struct CGSize)calculateExpandedImageFramesForRect:(struct CGRect)arg1;
- (struct CGSize)calculateCollapsedImageFramesForRect:(struct CGRect)arg1;
- (void)hideImagePreview:(id)arg1;
- (void)showImagePreview:(id)arg1;
- (void)timedShowImagePreview:(id)arg1;
- (void)scheduleShowImagePreview:(id)arg1;
- (void)observeImageInfoNotification:(id)arg1;
- (void)requestImageList;
- (void)handleIncomingMessage:(void *)arg1;
- (unsigned long long)imageRequestMaximumCount;
- (unsigned long long)maxSimultaneousDownloads;
- (unsigned long long)maxThumbnails;
- (id)thumbnailHeaders;
- (id)queryHeaders;
- (id)providerName;
- (void)addImageURL:(id)arg1 thumbnailURL:(id)arg2 refererURL:(id)arg3 title:(id)arg4 imageSize:(struct CGSize)arg5 thumbnailSize:(struct CGSize)arg6;
- (BOOL)processRequest:(id)arg1 data:(id)arg2;
- (void)scrollDown;
- (void)scrollUp;
- (id)moreDescription;
- (void)animationDidEnd:(BOOL)arg1;
- (void)animationWillBegin:(BOOL)arg1;
- (void)adjustLayout;
- (id)viewAnimationsForFrame:(struct CGRect)arg1 expanded:(BOOL)arg2;
- (struct CGSize)idealSize;
- (void)lookupSearchTerm;
- (id)moduleSubtitle;
- (id)moduleName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commonLUImagesModuleTeardown;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
