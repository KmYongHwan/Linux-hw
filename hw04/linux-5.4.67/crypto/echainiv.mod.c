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
	{ 0xd432c573, "crypto_unregister_template" },
	{ 0x21c22cea, "crypto_register_template" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0x77b3c86c, "aead_exit_geniv" },
	{ 0x538873b5, "aead_init_geniv" },
	{ 0x5b831490, "aead_geniv_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x58c07e29, "aead_geniv_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "200E51542A01AF555F4D0F0");
