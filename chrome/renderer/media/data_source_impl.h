// Copyright (c) 2009 The Chromium Authors. All rights reserved.  Use of this
// source code is governed by a BSD-style license that can be found in the
// LICENSE file.

#ifndef CHROME_RENDERER_MEDIA_DATA_SOURCE_IMPL_H_
#define CHROME_RENDERER_MEDIA_DATA_SOURCE_IMPL_H_

#include <string>

#include "media/base/filters.h"
#include "media/base/media_format.h"

class DataSourceImpl : public media::DataSource {
 public:
  DataSourceImpl();

  // media::MediaFilter implementation.
  virtual void Stop();

  // media::DataSource implementation.
  virtual bool Initialize(const std::string& uri);
  virtual const media::MediaFormat* GetMediaFormat();
  virtual size_t Read(char* data, size_t size);
  virtual bool GetPosition(int64* position_out);
  virtual bool SetPosition(int64 position);
  virtual bool GetSize(int64* size_out);

 protected:
  virtual ~DataSourceImpl();

 private:
  DISALLOW_COPY_AND_ASSIGN(DataSourceImpl);
};

#endif  // CHROME_RENDERER_MEDIA_DATA_SOURCE_IMPL_H_
