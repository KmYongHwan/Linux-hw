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
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9703100, "max8997_write_reg" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x123a68da, "input_ff_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbb77e50, "input_ff_create_memless" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xeb561ef, "regulator_get" },
	{ 0x5654e6bf, "pwm_apply_state" },
	{ 0x9f8432b6, "pwm_request" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf675d208, "pwm_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1573d6a, "regulator_put" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("platform:max8997-haptic");

MODULE_INFO(srcversion, "89D2B1C4E6877F327917C8A");
