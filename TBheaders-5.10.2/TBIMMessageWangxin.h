//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMAVMessage-Protocol.h"
#import "TBIMImageMessage-Protocol.h"
#import "TBIMItemMessage-Protocol.h"
#import "TBIMSystemMessage-Protocol.h"
#import "TBIMTextMessage-Protocol.h"
#import "TBIMVideoMessage-Protocol.h"
#import "TBIMWWTemplateMessage-Protocol.h"

@class NSAttributedString, NSData, NSDate, NSDictionary, NSString, NSURL, UIImage, WWMessage;

@interface TBIMMessageWangxin : NSObject <TBIMImageMessage, TBIMAVMessage, TBIMTextMessage, TBIMSystemMessage, TBIMVideoMessage, TBIMWWTemplateMessage, TBIMItemMessage>
{
    struct CGSize _textSize;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 24 = 0x18
    _Bool _collected;	// 32 = 0x20
    int _type;	// 36 = 0x24
    NSString *_sessionId;	// 40 = 0x28
    NSString *_messageId;	// 48 = 0x30
    unsigned long long _tempDirection;	// 56 = 0x38
    unsigned long long _tempSendStatus;	// 64 = 0x40
    UIImage *_image;	// 72 = 0x48
    NSString *_imageLocalCacheKey;	// 80 = 0x50
    NSData *_dataRecoding;	// 88 = 0x58
    NSData *_wavDataRecord;	// 96 = 0x60
    long long _duration;	// 104 = 0x68
    NSString *_audioLocalPath;	// 112 = 0x70
    NSString *_content;	// 120 = 0x78
    NSDate *_tempSendTime;	// 128 = 0x80
    NSString *_tempSenderNick;	// 136 = 0x88
    NSData *_videoData;	// 144 = 0x90
    NSURL *_localVideoUrl;	// 152 = 0x98
    double _videoWidth;	// 160 = 0xa0
    double _videoHeight;	// 168 = 0xa8
    UIImage *_previewImage;	// 176 = 0xb0
    CDUnknownBlockType _openUrlBlock;	// 184 = 0xb8
    NSDictionary *_itemData;	// 192 = 0xc0
    WWMessage *_data;	// 200 = 0xc8
    NSString *_imagePreview;	// 208 = 0xd0
    CDUnknownBlockType _videoMessageUploadProgressBlock;	// 216 = 0xd8
}

@property(copy, nonatomic) CDUnknownBlockType videoMessageUploadProgressBlock; // @synthesize videoMessageUploadProgressBlock=_videoMessageUploadProgressBlock;
@property(copy, nonatomic) NSString *imagePreview; // @synthesize imagePreview=_imagePreview;
@property(retain, nonatomic) WWMessage *data; // @synthesize data=_data;
@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(retain, nonatomic) NSDictionary *itemData; // @synthesize itemData=_itemData;
@property(copy, nonatomic) CDUnknownBlockType openUrlBlock; // @synthesize openUrlBlock=_openUrlBlock;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) NSURL *localVideoUrl; // @synthesize localVideoUrl=_localVideoUrl;
@property(copy, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(copy, nonatomic) NSString *tempSenderNick; // @synthesize tempSenderNick=_tempSenderNick;
@property(copy, nonatomic) NSDate *tempSendTime; // @synthesize tempSendTime=_tempSendTime;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *audioLocalPath; // @synthesize audioLocalPath=_audioLocalPath;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSData *wavDataRecord; // @synthesize wavDataRecord=_wavDataRecord;
@property(retain, nonatomic) NSData *dataRecoding; // @synthesize dataRecoding=_dataRecoding;
@property(copy, nonatomic) NSString *imageLocalCacheKey; // @synthesize imageLocalCacheKey=_imageLocalCacheKey;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long tempSendStatus; // @synthesize tempSendStatus=_tempSendStatus;
@property(nonatomic) unsigned long long tempDirection; // @synthesize tempDirection=_tempDirection;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)getItemDetailUrl;
- (id)getItemSold;
- (id)getItemPrice;
- (id)getItemTitle;
- (id)getItemImageUrl;
- (id)getItemId;
- (_Bool)isSilent;
- (_Bool)shouldBePlacedCentrally;
- (id)accessibleLabel;
- (id)activeList;
- (id)templateDict;
- (void)setAttributedContent:(id)arg1;
- (id)attributedContent;
- (void)setTextSize:(struct CGSize)arg1;
- (struct CGSize)textSize;
- (long long)Compare:(id)arg1;
- (id)getSenderName;
- (id)getSender;
- (id)getSession;
- (_Bool)isEqual:(id)arg1;
- (id)summary;
- (id)getSendTime;
- (void)setIsPlayed;
- (_Bool)isPlayed;
- (long long)getDuration;
- (unsigned long long)uploadStatus;
- (_Bool)isUploadFinished;
- (void)dealloc;
- (void)dealMessageUploadVideoDataProgressNotification:(id)arg1;
- (void)setUploadVideoDataProgressCallBackBlock:(CDUnknownBlockType)arg1;
- (double)progressForUploadVideoData;
- (id)getDataUrl:(_Bool *)arg1;
- (double)getVideoDataSize;
- (void)asyncFetchVideoDataAndCacheInLocalWithCompletion:(CDUnknownBlockType)arg1;
- (id)getVideoUrl:(_Bool *)arg1;
- (_Bool)isEmoticon;
- (id)getPreviwImageObject;
- (id)getLocalImage:(id)arg1;
- (struct CGSize)getPreviewImageSize;
- (id)getPreviewURL:(_Bool *)arg1;
- (void)setLocalPreviewUrl:(id)arg1;
- (id)getImageUrl:(_Bool *)arg1;
- (_Bool)needSecurityNotice;
- (id)getSessionId;
- (unsigned long long)getReadStatus;
- (unsigned long long)getSendStatus;
- (unsigned long long)getDirection;
- (id)getContent;
- (int)getMessageType;
- (id)getMessageID;
- (id)initWithData:(id)arg1;
- (id)getInerData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

