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
	{ 0x890b3d61, "_dev_err" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x7cec4410, "__regmap_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdcc80fb9, "__i2c_transfer" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8733236, "intlog10" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f7fec7b, "regmap_exit" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core");

MODULE_ALIAS("i2c:af9013");

MODULE_INFO(srcversion, "80BC6F842727F6BA551C9AA");
