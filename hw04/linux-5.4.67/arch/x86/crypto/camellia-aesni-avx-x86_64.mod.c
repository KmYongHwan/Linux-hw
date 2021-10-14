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
	{ 0xb53cc66b, "__camellia_enc_blk" },
	{ 0xa2080c50, "glue_ctr_req_128bit" },
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0xc5e3cec8, "__camellia_setkey" },
	{ 0x69211153, "camellia_dec_blk_2way" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x76da75a, "camellia_crypt_ctr_2way" },
	{ 0x8c7034cc, "simd_unregister_skciphers" },
	{ 0x17d1814f, "camellia_crypt_ctr" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x3f2ca2e5, "glue_ecb_req_128bit" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x7ded6e91, "simd_register_skciphers_compat" },
	{ 0x3241469, "glue_xts_req_128bit" },
	{ 0x62cbf7ba, "__camellia_enc_blk_2way" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a1d58de, "camellia_decrypt_cbc_2way" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x15066ecc, "glue_cbc_encrypt_req_128bit" },
	{ 0x410e0fb4, "camellia_dec_blk" },
	{ 0xce108ddb, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "camellia-x86_64,glue_helper,crypto_simd");


MODULE_INFO(srcversion, "FA89C6022DFF8D0E0A5BD8D");
