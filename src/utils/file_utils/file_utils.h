#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <QString>
#include <QtGlobal>

class FileUtils
{
public:
	static qint64 calculateDirSize(const QString& path);
};

#endif // FILE_UTILS_H
