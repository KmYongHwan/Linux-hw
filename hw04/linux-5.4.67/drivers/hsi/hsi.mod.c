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
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x785dd9f2, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6f7270a, "device_add" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xf720a60b, "module_put" },
	{ 0x7ea19302, "put_device" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "55061EB2E3B563A747AC588");
