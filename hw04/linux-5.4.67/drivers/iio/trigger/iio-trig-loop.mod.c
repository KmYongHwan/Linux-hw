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
	{ 0xc950f19c, "iio_unregister_sw_trigger_type" },
	{ 0x1f388f1d, "iio_register_sw_trigger_type" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0xd20a89aa, "iio_trigger_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ddb75b6, "iio_trigger_free" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-sw-trigger,industrialio");


MODULE_INFO(srcversion, "C4982957715C5D006D1147C");
