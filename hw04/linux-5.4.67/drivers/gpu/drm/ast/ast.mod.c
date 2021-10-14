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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xc344af18, "drm_release" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9560d7f, "drm_crtc_helper_set_config" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xa2393307, "drm_helper_resume_force_mode" },
	{ 0xf330301a, "drm_get_edid" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0xe5de8feb, "drm_vram_mm_file_operations_mmap" },
	{ 0xddc141e3, "drm_gem_vram_kunmap" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0xc13006f, "drm_vram_helper_release_mm" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0x181145c0, "drm_gem_vram_mm_funcs" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x297fa670, "drm_fbdev_generic_setup" },
	{ 0x231c16dc, "drm_gem_vram_create" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x9a884d5f, "drm_helper_connector_dpms" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0xf10de535, "ioread8" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x328b4a73, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0xa6adf8fd, "drm_put_dev" },
	{ 0xfef0539a, "drm_gem_fb_create" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0xb245c251, "drm_read" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0x1cd01632, "drm_connector_init_with_ddc" },
	{ 0x82b04ebf, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x72f80faa, "drm_kms_helper_poll_enable" },
	{ 0x53b398bd, "drm_gem_vram_unpin" },
	{ 0x33234cc, "drm_gem_vram_kmap" },
	{ 0x7952db4, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3b1ef69b, "drm_get_pci_dev" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0xc12c4f0, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x15188f60, "drm_crtc_init" },
	{ 0xc3a9f353, "drm_gem_vram_offset" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0x90b695aa, "drm_connector_unregister" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe1dbad95, "drm_crtc_cleanup" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x9b281506, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x55e801ae, "drm_gem_prime_mmap" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x47c910e1, "drm_gem_vram_driver_dumb_create" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0xbdc42f20, "drm_mode_crtc_set_gamma_size" },
	{ 0xf68e18d0, "drm_kms_helper_poll_disable" },
	{ 0x65c824e4, "drm_mode_object_find" },
	{ 0xede283d, "release_firmware" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper,i2c-algo-bit");

MODULE_ALIAS("pci:v00001A03d00002000sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00001A03d00002010sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "217868C931F001805D5CC38");
