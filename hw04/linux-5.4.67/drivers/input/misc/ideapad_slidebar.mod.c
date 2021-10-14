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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5ada0011, "input_event" },
	{ 0x816b3ac4, "serio_interrupt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xc0b05922, "i8042_remove_filter" },
	{ 0xff76d558, "input_register_device" },
	{ 0xf030674d, "i8042_install_filter" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20017*:pvr*LenovoIdeaPadY550*:");
MODULE_ALIAS("dmi*:svn*LENOVO*:pn*20035*:pvr*LenovoIdeaPadY550P*:");

MODULE_INFO(srcversion, "D9237722A08D77EEFE91FCC");
