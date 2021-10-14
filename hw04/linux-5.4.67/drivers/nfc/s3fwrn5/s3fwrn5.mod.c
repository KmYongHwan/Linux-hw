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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf5ae1a0e, "nci_req_complete" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0xe83cfdb5, "nci_recv_frame" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb75bab9, "nci_core_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x9a46a2a0, "nci_unregister_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1114b631, "nci_prop_cmd" },
	{ 0x32cd01be, "nci_core_reset" },
	{ 0xacde0476, "crypto_shash_digest" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71deb539, "request_firmware" },
	{ 0x29361773, "complete" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf0e55155, "nci_register_device" },
	{ 0xede283d, "release_firmware" },
	{ 0x86c5c4cc, "nci_allocate_device" },
	{ 0xe1070446, "nci_free_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "nci");


MODULE_INFO(srcversion, "50C73F3CA877BACEDB94E0D");
