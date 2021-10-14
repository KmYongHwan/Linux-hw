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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0xc4142837, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xb6f7270a, "device_add" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x605e35f4, "bus_for_each_dev" },
	{ 0x7ea19302, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b6bafe5, "snd_seq_root" },
	{ 0x66cf9a80, "snd_info_free_entry" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x32723dd6, "snd_info_create_module_entry" },
	{ 0xce30b9d3, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "5DF8F9C058836CBA2E0F90D");
