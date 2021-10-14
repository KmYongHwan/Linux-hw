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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4841bdee, "strnchr" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x71c71a2, "ucsi_register_ppm" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2d934d86, "device_property_read_u16_array" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xdb823e1f, "ucsi_notify" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x5103e9d0, "ucsi_unregister_ppm" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb6c5b2ff, "ucsi_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "typec_ucsi");

MODULE_ALIAS("i2c:ccgx-ucsi");

MODULE_INFO(srcversion, "29B9E12ADC88EF92DF73CFD");
