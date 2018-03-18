#pragma once

namespace AI{
	class AI1;
	class Param
	{
	public:
		int m_id;			// ���
		double m_weight;	// ��ǰ��Ȩ��
		double m_value;		// ��ǰ��ֵ
		double m_estiSum;	// ���ֵ��ʾ���ۺ�
		double m_gradient;	// �ݶ�ֵ�����ۺͳ�������

	public:
		double GetEstiVal(){ return m_weight * m_value; }
		void SetEstiResult(double deltaResult, int count)
		{
			// ������ۺ�
			m_estiSum += (deltaResult * m_value);
			// �����ݶ�
			m_gradient = m_estiSum / count;
			// ���¼���Ȩ�� = ԭȨ��-�ݶ�
			m_weight -= m_gradient;
		}

	public:
		Param(int id, double defaultWeight);
		~Param();

		void AddSample(double value);
		void GetGradient(AI1 a1);
		//void SetSample(int idx, double val, double result);
	};
}
