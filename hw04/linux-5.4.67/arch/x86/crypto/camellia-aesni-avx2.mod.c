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
	{ 0xc5e3cec8, "__camellia_setkey" },
	{ 0x9ba73d8e, "camellia_ecb_enc_16way" },
	{ 0x69211153, "camellia_dec_blk_2way" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf1e7cdb7, "xts_camellia_setkey" },
	{ 0x76da75a, "camellia_crypt_ctr_2way" },
	{ 0x8c7034cc, "simd_unregister_skciphers" },
	{ 0x95625eb9, "camellia_ctr_16way" },
	{ 0x17d1814f, "camellia_crypt_ctr" },
	{ 0x3f2ca2e5, "glue_ecb_req_128bit" },
	{ 0x19ea0a50, "camellia_xts_enc_16way" },
	{ 0xbdb3b1d4, "camellia_cbc_dec_16way" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x110a5ea5, "camellia_ecb_dec_16way" },
	{ 0x7ded6e91, "simd_register_skciphers_compat" },
	{ 0x3241469, "glue_xts_req_128bit" },
	{ 0x62cbf7ba, "__camellia_enc_blk_2way" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a1d58de, "camellia_decrypt_cbc_2way" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xac98858, "camellia_xts_dec" },
	{ 0x187244da, "camellia_xts_dec_16way" },
	{ 0x15066ecc, "glue_cbc_encrypt_req_128bit" },
	{ 0x410e0fb4, "camellia_dec_blk" },
	{ 0x701dafab, "camellia_xts_enc" },
	{ 0xce108ddb, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "camellia-x86_64,glue_helper,camellia-aesni-avx-x86_64,crypto_simd");


MODULE_INFO(srcversion, "D941AE203E30F931924FFA9");
