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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8c7034cc, "simd_unregister_skciphers" },
	{ 0x8d319766, "simd_unregister_aeads" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xf41f70d6, "skcipher_walk_done" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x7ded6e91, "simd_register_skciphers_compat" },
	{ 0x3241469, "glue_xts_req_128bit" },
	{ 0x11ed109f, "skcipher_walk_virt" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x77cc64fa, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x7ac7519e, "simd_register_aeads_compat" },
	{ 0x37a0cba, "kfree" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xf24963f2, "crypto_unregister_alg" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "glue_helper,crypto_simd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");

MODULE_INFO(srcversion, "4CD6567B52975D491E52A5F");
