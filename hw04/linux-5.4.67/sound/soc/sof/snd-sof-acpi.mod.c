#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xaabb51a4, "byt_chip_info" },
	{ 0x981251c2, "snd_sof_suspend" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x58eaad1b, "snd_sof_device_probe" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x5e25cf8d, "cht_chip_info" },
	{ 0x693aafd9, "snd_sof_resume" },
	{ 0xcff0dd54, "snd_sof_runtime_suspend" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xed25be41, "sof_byt_ops" },
	{ 0x9576b072, "snd_sof_device_remove" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xe3031cad, "snd_sof_runtime_resume" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8a3782a9, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xe02629a5, "sof_cht_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b641f39, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xde5124e0, "snd_sof_runtime_idle" },
	{ 0xb434fe7d, "sof_xtensa_arch_ops" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-sof-intel-byt,snd-sof,snd-soc-acpi,snd-soc-acpi-intel-match,snd-sof-xtensa-dsp");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "DA00605F2B809569FFC3CC7");
