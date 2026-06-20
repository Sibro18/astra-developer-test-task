#include <QLocale>

#include "format_utils.h"

QString FormatUtils::formatSize(qint64 bytes)
{
	int precision = 2;

	if (bytes < 1024)
	{
		precision = 0;
	}
	else if (bytes < 1024LL * 1024 * 1024)
	{
		precision = 1;
	}

	return QLocale().formattedDataSize(bytes, precision, QLocale::DataSizeIecFormat);
}
