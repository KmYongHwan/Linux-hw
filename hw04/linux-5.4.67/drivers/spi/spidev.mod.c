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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x66414bc7, "__class_create" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7ea19302, "put_device" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x963cf8c8, "get_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe4f5a219, "stream_open" },
	{ 0x1853cecf, "spi_slave_abort" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x88e96942, "device_create" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");

MODULE_INFO(srcversion, "0524F9EBE0F698C10469D81");
