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
	{ 0xc6ee8227, "iio_bus_type" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xb6f7270a, "device_add" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x9415ca79, "__module_get" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0xd20a89aa, "iio_trigger_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf720a60b, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ddb75b6, "iio_trigger_free" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "E828613F92FEE907C98F600");
