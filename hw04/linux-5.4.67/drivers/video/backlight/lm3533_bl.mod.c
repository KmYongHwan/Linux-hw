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
	{ 0x890b3d61, "_dev_err" },
	{ 0x714f25f9, "lm3533_ctrlbank_set_max_current" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x502e851d, "devm_backlight_device_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5651aacf, "lm3533_ctrlbank_set_brightness" },
	{ 0xd5cdbab7, "lm3533_ctrlbank_get_brightness" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x763cc38, "lm3533_read" },
	{ 0xc611adc3, "lm3533_update" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x96848186, "scnprintf" },
	{ 0x9d799a9f, "lm3533_ctrlbank_get_pwm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca364c6d, "lm3533_ctrlbank_set_pwm" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x147dfba1, "lm3533_ctrlbank_disable" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6c8377a2, "lm3533_ctrlbank_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lm3533-ctrlbank,lm3533-core");


MODULE_INFO(srcversion, "D039BC369478C10D27A3750");
