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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcc80fb9, "__i2c_transfer" },
	{ 0x8733236, "intlog10" },
	{ 0x71deb539, "request_firmware" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xede283d, "release_firmware" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core");

MODULE_ALIAS("i2c:m88ds3103");

MODULE_INFO(srcversion, "B899261B3E1AB56CB11EDF9");
