#pragma once
namespace AI
{
	class Param;
	class Sample;
	class AI1
	{
	public:
		std::vector<std::shared_ptr<Param>> m_Params;
		std::list<std::shared_ptr<Sample>> m_Samples;
		double m_weight;

	public:
		AI1();
		~AI1();

		// ����ԭʼ�Ĳ�����������Ĭ�ϵ�Ȩֵ����������һ��Ҫ����ʵ���������һ����������ʵ����Ҫͳ��3������������������д��4�������һ��Ϊ�˸������õ�
		void InitParam(std::vector<double> defWeights);
		// ���������������Ĳ�������Ҳ����ز���������1�������һ���������ã�ÿ�ζ�����Ϊ1.0
		void AddSample(std::shared_ptr<Sample> sample);
	};
}
