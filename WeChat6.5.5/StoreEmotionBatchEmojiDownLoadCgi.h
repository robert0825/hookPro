//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@protocol StoreEmotionBatchEmojiDownLoadCgiDelegate;

__attribute__((visibility("hidden")))
@interface StoreEmotionBatchEmojiDownLoadCgi : StoreEmotionBaseCgi
{
    id <StoreEmotionBatchEmojiDownLoadCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionBatchEmojiDownLoadCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (_Bool)startRequestWithMd5List:(id)arg1;
- (id)init;

@end

