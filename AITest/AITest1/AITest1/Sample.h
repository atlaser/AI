#pragma once

namespace AI{
	class Sample
	{
	public:
		std::vector<double> m_values;
		double m_realResult;	// ��ʵ��ֵ
		double m_estiResult;	// ���Ƶ�ֵ
		double m_detalResult;	// ��ʵֵ���ֵ�Ĳ�ֵ

	public:
		void SetEstiResult(double& val){ m_estiResult = val; m_detalResult = m_estiResult - m_realResult; }

	public:
		Sample();
		~Sample();
	};
}
