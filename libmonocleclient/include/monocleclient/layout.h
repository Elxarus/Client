// layout.h
//

#ifndef IDLIY0KUASASDASDSADADAZZZZUCV1EPVI
#define IDLIY0KUASASDASDSADADAZZZZUCV1EPVI

///// Includes /////

#include <boost/shared_ptr.hpp>
#include <monocleprotocol/monocleprotocol.hpp>
#include <QObject>
#include <QSharedPointer>
#include <QString>
#include <vector>

///// Namespaces /////

namespace client
{

///// Declarations /////

class Device;

///// Classes /////

class LayoutView
{
 public:

  LayoutView(const uint64_t token, const int32_t x, const int32_t y, const int32_t width, const int32_t height);

  inline uint64_t GetToken() const { return token_; }
  inline int32_t GetX() const { return x_; }
  inline int32_t GetY() const { return y_; }
  inline int32_t GetWidth() const { return width_; }
  inline int32_t GetHeight() const { return height_; }

  uint64_t token_; // This is the token of the recording or map, not of this entity
  int32_t x_;
  int32_t y_;
  int32_t width_;
  int32_t height_;

};

class LayoutWindow
{
 public:

  LayoutWindow(const boost::shared_ptr<Device>& device, const uint64_t token, const bool mainwindow, const bool maximised, const int32_t screenx, const int32_t screeny, const int32_t screenwidth, const int32_t screenheight, const int32_t x, const int32_t y, const int32_t width, const int32_t height, const uint32_t gridwidth, const uint32_t gridheight, const std::vector< QSharedPointer<LayoutView> >& maps, const std::vector< QSharedPointer<LayoutView> >& recordings);

  boost::shared_ptr<Device> device_;
  uint64_t token_;
  bool mainwindow_;
  bool maximised_;
  int32_t screenx_;
  int32_t screeny_;
  int32_t screenwidth_;
  int32_t screenheight_;
  int32_t x_;
  int32_t y_;
  int32_t width_;
  int32_t height_;
  uint32_t gridwidth_;
  uint32_t gridheight_;
  std::vector< QSharedPointer<LayoutView> > maps_;
  std::vector< QSharedPointer<LayoutView> > recordings_;

};

class Layout : public QObject
{
 Q_OBJECT

 public:

  Layout(const boost::shared_ptr<Device>& device, const monocle::LAYOUT& layout);
  ~Layout();

  void SetName(const QString& name);
  void SetConfiguration(const monocle::LAYOUT& layout);

  inline const boost::shared_ptr<Device>& GetDevice() const { return device_; }
  inline uint64_t GetToken() const { return token_; }
  inline const QString& GetName() const { return name_; }
  inline const std::vector< QSharedPointer<LayoutWindow> >& GetWindows() const { return windows_; }

 private:

  std::vector< QSharedPointer<LayoutWindow> > GetWindows(const std::vector<monocle::LAYOUTWINDOW>& windows) const;

  boost::shared_ptr<Device> device_;
  uint64_t token_;
  QString name_;
  std::vector< QSharedPointer<LayoutWindow> > windows_;

};

}

#endif
