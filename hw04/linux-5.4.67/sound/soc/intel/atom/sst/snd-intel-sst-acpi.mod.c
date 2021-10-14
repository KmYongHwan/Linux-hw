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
	{ 0xbf9b2b34, "sst_context_init" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0x64eab6b9, "sst_context_cleanup" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x70696cb5, "sst_alloc_drv_context" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x7de0affe, "intel_sst_pm" },
	{ 0x87c34f23, "sst_configure_runtime_pm" },
	{ 0xbba8cdfa, "snd_soc_acpi_find_machine" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8a3782a9, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b641f39, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-intel-sst-core,snd-soc-acpi,snd-soc-acpi-intel-match");

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "9C6AE97B9603755C9410ABD");
