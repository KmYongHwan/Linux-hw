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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xc042b99a, "input_unregister_polled_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x47a83910, "input_free_polled_device" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5f0e284b, "input_allocate_polled_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5ada0011, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");


MODULE_INFO(srcversion, "075F6BB735854DDD3415C3E");
