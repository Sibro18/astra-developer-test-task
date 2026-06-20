#ifndef FORMAT_UTILS_H
#define FORMAT_UTILS_H

#include <QString>
#include <QtGlobal>

class FormatUtils
{
public:
	static QString formatSize(qint64 bytes);
};

#endif // FORMAT_UTILS_H
