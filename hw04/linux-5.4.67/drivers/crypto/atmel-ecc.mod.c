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
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x29d12d08, "crypto_register_kpp" },
	{ 0x7c66b7fa, "atmel_i2c_probe" },
	{ 0xc5850110, "printk" },
	{ 0x1b15bd5e, "crypto_alloc_kpp" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xad0eae7b, "crypto_unregister_kpp" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7ccdb5e, "atmel_i2c_send_receive" },
	{ 0xc71ed50c, "atmel_i2c_init_genkey_cmd" },
	{ 0x3cb9c788, "crypto_stats_kpp_set_secret" },
	{ 0x515ba532, "crypto_ecdh_decode_key" },
	{ 0xf884461f, "crypto_stats_kpp_generate_public_key" },
	{ 0xe89be789, "atmel_i2c_enqueue" },
	{ 0x7ca59e42, "crypto_stats_kpp_compute_shared_secret" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0xfaab573f, "atmel_i2c_init_ecdh_cmd" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atmel-i2c,ecdh_generic");

MODULE_ALIAS("i2c:atecc508a");

MODULE_INFO(srcversion, "6BF827776408370D17233AA");
