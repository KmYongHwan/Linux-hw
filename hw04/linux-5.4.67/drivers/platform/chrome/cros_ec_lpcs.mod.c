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
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xa45e53e7, "cros_ec_check_result" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0x5dc9b186, "cros_ec_resume" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6a793890, "cros_ec_prepare_tx" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe2a8f14b, "cros_ec_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0x9a9b2aea, "cros_ec_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd917f6c6, "cros_ec_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x1e17f49f, "cros_ec_get_next_event" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("acpi*:GOOG0004:*");
MODULE_ALIAS("dmi*:bvn*coreboot*:bvr*Google_*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:svn*GOOGLE*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Samus*:");
MODULE_ALIAS("dmi*:svn*Acer*:pn*Peppy*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Glimmer*:");

MODULE_INFO(srcversion, "1E58F3DB05E043AF5BD65F4");
