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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0xa09b7a8d, "mc13xxx_get_flags" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x349cba85, "strchr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3d33d3e, "mc13xxx_adc_do_conversion" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-adc");
MODULE_ALIAS("platform:mc13892-adc");

MODULE_INFO(srcversion, "D8689B8C401C03E6B44B75C");
