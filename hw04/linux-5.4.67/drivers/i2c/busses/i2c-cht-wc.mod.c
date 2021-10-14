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
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xab75265c, "irq_set_chip_and_handler_name" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0xeaa470a4, "irq_domain_simple_ops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x66a079cc, "rt_mutex_lock" },
	{ 0x97c8e113, "rt_mutex_trylock" },
	{ 0xdbd12ec4, "rt_mutex_unlock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96ee549f, "irq_domain_remove" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:cht_wcove_ext_chgr");

MODULE_INFO(srcversion, "3A6F096B4C20455787F3BFB");
