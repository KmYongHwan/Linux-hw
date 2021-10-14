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
	{ 0xde3f3b95, "w1_reset_select_slave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x6a2a0a37, "w1_write_block" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0xf765945, "w1_read_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa02639dc, "w1_register_family" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xab334ebf, "w1_unregister_family" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "B8D797D07D4ABF693E10E12");
